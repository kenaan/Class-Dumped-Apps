//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTStoreKitTransactionObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString, YTUserDefaults;

@interface YTTransactionLocker : NSObject <YTStoreKitTransactionObserver>
{
    NSMutableDictionary *_transactions;
    NSMutableDictionary *_completedTransactions;
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)clearAllTransactions;
- (void)clearInMemoryTransactions;
- (void)saveToDefaults;
- (void)restoreFromDefaults;
- (id)transactionsFromDefaults:(id)arg1;
- (id)dictionary;
- (id)serializedTransactionsListFromTransactions:(id)arg1;
- (void)archiveTransaction:(id)arg1;
- (id)pendingTransactionsDescription;
- (id)completedTransactionsDescription;
- (void)transaction:(id)arg1 statusDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)transaction:(id)arg1 statusWillChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
@property(readonly, copy) NSString *description;
- (long long)count;
- (id)lastFinalizedTransactionForPayment:(id)arg1;
- (id)transactionForKey:(id)arg1;
- (id)transactionForPaymentTransaction:(id)arg1;
- (_Bool)insertTransaction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

