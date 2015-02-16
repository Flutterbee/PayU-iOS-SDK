//
//  PayUConnectionHandlerController.h
//  PayU_iOS_SDK
//
//  Created by Suryakant Sharma on 14/02/15.
//  Copyright (c) 2015 PayU, India. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayUErrorConstant.h"
#import "PayUNotificationConstant.h"


@protocol PayUConnectionHandlerControllerDelegate <NSObject>

@optional

- (void) successResponse:(NSDictionary *) responseDict;
- (void) failureResponse:(NSDictionary *) errorDict;

@end


@interface PayUConnectionHandlerController : NSObject

@property(nonatomic,weak) id <PayUConnectionHandlerControllerDelegate> delegate;

- (instancetype) init:(NSDictionary *) requiredParam;
- (void) deleteStoredCardWithCardToken :(NSNumber* )cardToken;
- (void) listOfStoredCard;
- (void) listOfInternetBankingOption;
- (NSMutableURLRequest *) URLRequestForInternetBankingWithBankCode:(NSString *)bankCode;
- (NSURLRequest *) URLRequestForPaymentWithStoredCard:(NSDictionary *)selectedStoredCardDict;
- (NSURLRequest *) URLRequestForCardPayment:(NSDictionary *) detailsDict;

@end