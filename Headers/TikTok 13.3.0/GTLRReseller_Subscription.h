//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRReseller_RenewalSettings, GTLRReseller_Seats, GTLRReseller_Subscription_Plan, GTLRReseller_Subscription_TransferInfo, GTLRReseller_Subscription_TrialSettings, NSArray, NSNumber, NSString;

@interface GTLRReseller_Subscription : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *billingMethod; // @dynamic billingMethod;
@property(retain, nonatomic) NSNumber *creationTime; // @dynamic creationTime;
@property(copy, nonatomic) NSString *customerDomain; // @dynamic customerDomain;
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(copy, nonatomic) NSString *dealCode; // @dynamic dealCode;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRReseller_Subscription_Plan *plan; // @dynamic plan;
@property(copy, nonatomic) NSString *purchaseOrderId; // @dynamic purchaseOrderId;
@property(retain, nonatomic) GTLRReseller_RenewalSettings *renewalSettings; // @dynamic renewalSettings;
@property(copy, nonatomic) NSString *resourceUiUrl; // @dynamic resourceUiUrl;
@property(retain, nonatomic) GTLRReseller_Seats *seats; // @dynamic seats;
@property(copy, nonatomic) NSString *skuId; // @dynamic skuId;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSString *subscriptionId; // @dynamic subscriptionId;
@property(retain, nonatomic) NSArray *suspensionReasons; // @dynamic suspensionReasons;
@property(retain, nonatomic) GTLRReseller_Subscription_TransferInfo *transferInfo; // @dynamic transferInfo;
@property(retain, nonatomic) GTLRReseller_Subscription_TrialSettings *trialSettings; // @dynamic trialSettings;

@end

