//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKPaymentTransaction;

@interface GADODefaultInAppPurchase : NSObject
{
    NSString *_productID;
    long long _quantity;
    SKPaymentTransaction *_paymentTransaction;
}

+ (void)disableDefaultPurchaseFlow;
+ (void)enableDefaultPurchaseFlowWithDelegate:(id)arg1;
@property(readonly, nonatomic) SKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)finishTransaction;

@end

