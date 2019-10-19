//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWESecondKillAdModel : AWEBaseApiModel
{
    _Bool _isHighLevel;
    long long _adID;
    NSString *_adName;
    NSString *_jumpURL;
    NSArray *_picURLs;
}

+ (id)picURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isHighLevel; // @synthesize isHighLevel=_isHighLevel;
@property(retain, nonatomic) NSArray *picURLs; // @synthesize picURLs=_picURLs;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(retain, nonatomic) NSString *adName; // @synthesize adName=_adName;
@property(nonatomic) long long adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
- (id)jumpURLString;
- (id)picURL;

@end

