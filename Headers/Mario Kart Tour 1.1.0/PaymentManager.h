//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKRequestDelegate.h"

@class NPFVirtualCurrencyBundle, NSString;

@interface PaymentManager : NSObject <SKPaymentTransactionObserver, SKRequestDelegate>
{
    _Bool _methodExecutingFlag;
    _Bool _recoverPurchasedFlag;
    NPFVirtualCurrencyBundle *_bundle;
    CDUnknownBlockType _callback;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool recoverPurchasedFlag; // @synthesize recoverPurchasedFlag=_recoverPurchasedFlag;
@property(nonatomic) _Bool methodExecutingFlag; // @synthesize methodExecutingFlag=_methodExecutingFlag;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NPFVirtualCurrencyBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (_Bool)isEqualToTransactionId:(id)arg1 withSKTransaction:(id)arg2;
- (void)reset:(id)arg1 withEerror:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)getPurchasedTransactionsAndCleanupExpiredTransactions;
- (void)restorePurchased:(CDUnknownBlockType)arg1;
- (_Bool)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)recoverPurchased:(CDUnknownBlockType)arg1 withVirtualCurrencyBundle:(id)arg2;
- (void)purchase:(CDUnknownBlockType)arg1 withVirtualCurrencyBundle:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
