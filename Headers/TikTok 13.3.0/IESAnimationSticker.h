//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESSticker.h"

@class IESStickerAnimation;

@interface IESAnimationSticker : IESSticker
{
    IESStickerAnimation *_animations[5];
    long long _startIndex[5];
}

- (void).cxx_destruct;
- (long long *)animationQuickHelper;
- (id)animationWithType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAnimationWithType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1;

@end

