//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSString;

@interface IESMMCache : NSObject
{
    NSString *_reverseMD5;
    AVAsset *_reverseAsset;
    AVAsset *_reverseSrcAsset;
}

+ (id)shareInstance;
@property(retain, nonatomic) AVAsset *reverseSrcAsset; // @synthesize reverseSrcAsset=_reverseSrcAsset;
@property(retain, nonatomic) AVAsset *reverseAsset; // @synthesize reverseAsset=_reverseAsset;
@property(retain, nonatomic) NSString *reverseMD5; // @synthesize reverseMD5=_reverseMD5;
- (void).cxx_destruct;
- (void)clearReverse;
- (id)init;

@end

