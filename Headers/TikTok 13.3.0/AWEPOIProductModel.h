//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEPOIProductModel : AWEBaseApiModel
{
    NSString *_productId;
    NSString *_productName;
    NSString *_productUrl;
    NSString *_tagTitle;
    NSString *_price;
    NSString *_buttonTitle;
    NSString *_buttonUrl;
    AWEURLModel *_imageUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEURLModel *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *tagTitle; // @synthesize tagTitle=_tagTitle;
@property(copy, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

