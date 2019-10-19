//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, SCSnapchatterAccessoryViewModel, SCSnapchatterAvatarContainerViewModel;

@interface SCSnapchatterContentViewModel : NSObject <NSCopying>
{
    NSAttributedString *_displayTitleAttributedText;
    NSAttributedString *_subtitleAttributedText;
    SCSnapchatterAvatarContainerViewModel *_avatarViewModel;
    SCSnapchatterAccessoryViewModel *_accessoryViewModel;
    SCActionModel *_tapAction;
    double _snapchatterCardHeight;
}

@property(readonly, nonatomic) double snapchatterCardHeight; // @synthesize snapchatterCardHeight=_snapchatterCardHeight;
@property(readonly, copy, nonatomic) SCActionModel *tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, copy, nonatomic) SCSnapchatterAccessoryViewModel *accessoryViewModel; // @synthesize accessoryViewModel=_accessoryViewModel;
@property(readonly, copy, nonatomic) SCSnapchatterAvatarContainerViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
@property(readonly, copy, nonatomic) NSAttributedString *subtitleAttributedText; // @synthesize subtitleAttributedText=_subtitleAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *displayTitleAttributedText; // @synthesize displayTitleAttributedText=_displayTitleAttributedText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayTitleAttributedText:(id)arg1 subtitleAttributedText:(id)arg2 avatarViewModel:(id)arg3 accessoryViewModel:(id)arg4 tapAction:(id)arg5 snapchatterCardHeight:(double)arg6;

@end
