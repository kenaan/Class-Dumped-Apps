//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEDouPlusOrderResultModel : AWEBaseApiModel
{
    long long _state;
    NSString *_stateDesc;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *stateDesc; // @synthesize stateDesc=_stateDesc;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

