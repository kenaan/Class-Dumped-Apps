//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface AWEStudioCaptionModel : AWEBaseApiModel <MTLJSONSerializing, NSCopying>
{
    NSString *_text;
    double _startTime;
    double _endTime;
    NSArray *_words;
    NSArray *_lineRectArray;
    NSString *_rect;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSArray *lineRectArray; // @synthesize lineRectArray=_lineRectArray;
@property(copy, nonatomic) NSArray *words; // @synthesize words=_words;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

