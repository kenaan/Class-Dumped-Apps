//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDStoreCondition : NSObject
{
    long long _judgeType;
    NSString *_key;
    double _threshold;
    NSString *_stringValue;
}

@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long judgeType; // @synthesize judgeType=_judgeType;
- (void).cxx_destruct;
- (id)init;

@end

