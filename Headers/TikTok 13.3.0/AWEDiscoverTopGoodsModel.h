//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEDiscoverTopGoodsModel : AWEBaseApiModel
{
    NSString *_title;
    NSString *_category;
    AWEURLModel *_promotionImage;
    NSString *_promotionTitle;
    NSString *_h5Url;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *promotionTitle; // @synthesize promotionTitle=_promotionTitle;
@property(retain, nonatomic) AWEURLModel *promotionImage; // @synthesize promotionImage=_promotionImage;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
