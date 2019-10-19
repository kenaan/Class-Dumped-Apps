//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSString;

@interface NFUIPrequerySearchEntity : COEntity
{
    NSString *_displayTitle;
    NSString *_requestID;
    NSString *_trackID;
    NSString *_referenceID;
    unsigned long long _itemLength;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(nonatomic) unsigned long long itemLength; // @synthesize itemLength=_itemLength;
@property(retain, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(retain, nonatomic) NSString *trackID; // @synthesize trackID=_trackID;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
- (void).cxx_destruct;

@end
