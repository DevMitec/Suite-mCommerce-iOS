//
//  SuiteController.h
//  SuiteMCommerce
//
//  Created by Pruebas MIT Desarrollo on 15/02/16.
//  Copyright © 2016 Mercadotecnia Ideas y Tecnología. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BeanTokenizeResponse.h"
#import "SuiteError.h"
#import "BeanTokenization.h"
#import "Bean3DS.h"
#import "BeanPaymentWithToken.h"

@protocol SuiteControllerDelegate <NSObject>
-(void)didFinishPayProcess:(NSString*) response error:(SuiteError*) error;
-(void)didFinishAuthenticationProcess:(BeanTokenizeResponse*) tokenizeResponse error:(SuiteError*) error;
-(void)didFinishTokenizeTransantion:(BeanPaymentWithToken*) beanPaymentWithToken error:(SuiteError*) error;
-(void)operationCanceledByUser;
@end

typedef enum Environment {
    EnvironmentSANDBOX,
    EnvironmentDEV,
    EnvironmentQA,
    EnvironmentPROD
}Environment;

typedef enum PaymentType {
    PaymentTypeC,
    PaymentTypeTo3M,
    PaymentTypeTo6M,
    PaymentTypeTo9M,
    PaymentTypeTo12M
}PaymentType;

typedef enum Currency {
    CurrencyMXN,
    CurrencyUSD
}Currency;

@interface SuiteController : NSObject{
    Environment environment;
    UIViewController* currentViewController;
    id<SuiteControllerDelegate> suiteControllerDelegate;
}

- (id) initOnEnvironment:(Environment) environment
   currentViewController:(UIViewController *) viewController
                delegate:(id<SuiteControllerDelegate>) delegate;


- (void) AuthenticateWithBeanTokenization:(BeanTokenization*) beanTokenization
                                  bean3DS:(Bean3DS*) bean3DS;

- (void) sndPayWithTokenWithBeanTokenization:(BeanTokenization*) beanTokenization
                                     bean3DS:(Bean3DS*) bean3DS;

@end
