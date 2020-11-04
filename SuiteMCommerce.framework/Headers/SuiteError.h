//
//  SuiteError.h
//  SuiteMCommerce
//
//  Created by Pruebas MIT Desarrollo on 18/02/16.
//  Copyright © 2016 Mercadotecnia Ideas y Tecnología. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SuiteError : NSObject

- (id) initWithCode:(NSString*) code description:(NSString*) description;
- (NSString*) getCode;
- (NSString*) getDescription;

@end
