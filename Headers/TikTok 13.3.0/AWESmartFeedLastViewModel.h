//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWESmartFeedLastViewModel : AWEBaseApiModel
{
    long long _index;
    NSString *_message;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

