//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADOInAppPurchase : NSObject
{
    NSString *_productID;
    long long _quantity;
}

@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)reportPurchaseStatus:(long long)arg1;
- (id)init;

@end

