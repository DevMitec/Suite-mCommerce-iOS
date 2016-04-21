//
//  BeanTokenization.h
//  SuiteMCommerce
//
//  Created by Pruebas MIT Desarrollo on 29/03/16.
//  Copyright © 2016 Mercadotecnia Ideas y Tecnología. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeanTokenization : NSObject

@property (strong, nonatomic) NSString *branch;
@property (strong, nonatomic) NSString *company;
@property (strong, nonatomic) NSString *country;
@property (strong, nonatomic) NSString *user;
@property (strong, nonatomic) NSString *password;
@property (strong, nonatomic) NSString *merchant;
@property (nonatomic, assign) enum Currency currency;
@property (strong, nonatomic) NSString *operationType;
@property (strong, nonatomic) NSString *token;
@property (strong, nonatomic) NSString *amount;
@property (strong, nonatomic) NSString *reference;

@end
