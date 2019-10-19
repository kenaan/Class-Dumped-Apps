//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class IESProduct, NSString, SKPaymentTransaction;

@interface IESTransaction : NSObject <NSCoding>
{
    IESProduct *_product;
    NSString *_orderID;
    NSString *_receipt;
    SKPaymentTransaction *_transaction;
}

@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) IESProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithProduct:(id)arg1 orderID:(id)arg2 receipt:(id)arg3 transaction:(id)arg4;

@end

