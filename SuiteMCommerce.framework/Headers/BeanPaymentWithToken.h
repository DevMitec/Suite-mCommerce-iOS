//
//  BeanPaymentWithToken.h
//  SuiteMCommerce
//
//  Created by Pruebas MIT Desarrollo on 31/03/16.
//  Copyright © 2016 Mercadotecnia Ideas y Tecnología. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeanPaymentWithToken : NSObject

@property (strong, nonatomic) NSString *reference;
@property (strong, nonatomic) NSString *response;
@property (strong, nonatomic) NSString *folio;
@property (strong, nonatomic) NSString *auth;
@property (strong, nonatomic) NSString *cdResponse;
@property (strong, nonatomic) NSString *cdError;
@property (strong, nonatomic) NSString *nbError;
@property (strong, nonatomic) NSString *company;
@property (strong, nonatomic) NSString *merchant;
@property (strong, nonatomic) NSString *street;
@property (strong, nonatomic) NSString *ccType;
@property (strong, nonatomic) NSString *tpOperation;
@property (strong, nonatomic) NSString *ccName;
@property (strong, nonatomic) NSString *ccNumber;
@property (strong, nonatomic) NSString *ccExpMonth;
@property (strong, nonatomic) NSString *ccExpYear;
@property (strong, nonatomic) NSString *amount;
@property (strong, nonatomic) NSString *voucher;

@end
