//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWELiveRechargeWalletModel, NSArray;

@interface AWELiveRechargeDataController : NSObject
{
    AWELiveRechargeWalletModel *_walletModel;
    NSArray *_chargeModelArray;
}

@property(retain, nonatomic) NSArray *chargeModelArray; // @synthesize chargeModelArray=_chargeModelArray;
@property(retain, nonatomic) AWELiveRechargeWalletModel *walletModel; // @synthesize walletModel=_walletModel;
- (void).cxx_destruct;
- (void)buyProductWithIapID:(id)arg1 productID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getDiamondListWithFinishBlock:(CDUnknownBlockType)arg1 shouldUpdate:(_Bool)arg2;
- (void)getMyHonorInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getMyWalletWithFinishBlock:(CDUnknownBlockType)arg1;

@end

