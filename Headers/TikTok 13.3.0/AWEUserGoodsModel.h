//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEUserGoodsModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isOnSale;
    AWEURLModel *_cover;
    NSString *_title;
    NSString *_promotionId;
    NSString *_productId;
    NSString *_authorId;
    NSString *_schema;
    long long _price;
    long long _favoriteCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isOnSale; // @synthesize isOnSale=_isOnSale;
@property(nonatomic) long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEURLModel *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

