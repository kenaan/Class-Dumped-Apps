//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCAvatarAccessoryIcon, SCAvatarViewModel;

@interface SCAvatarContainerViewModel : NSObject <NSCopying>
{
    SCAvatarViewModel *_avatarViewModel;
    SCAvatarAccessoryIcon *_accessoryIcon;
}

@property(readonly, copy, nonatomic) SCAvatarAccessoryIcon *accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAvatarViewModel:(id)arg1 accessoryIcon:(id)arg2;

@end
