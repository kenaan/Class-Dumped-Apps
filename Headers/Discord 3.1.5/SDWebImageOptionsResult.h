//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SDWebImageOptionsResult : NSObject
{
    unsigned long long _options;
    struct NSDictionary *_context;
}

@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)arg1 context:(struct NSDictionary *)arg2;

@end
