//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEUserModel;

@interface AWEProfileTopVideoHelper : NSObject
{
    _Bool _isTopVideoFullScreen;
    _Bool _isTopVideoDidEnterFullScreen;
    AWEUserModel *_user;
}

@property(nonatomic) _Bool isTopVideoDidEnterFullScreen; // @synthesize isTopVideoDidEnterFullScreen=_isTopVideoDidEnterFullScreen;
@property(nonatomic) _Bool isTopVideoFullScreen; // @synthesize isTopVideoFullScreen=_isTopVideoFullScreen;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)isLeavingFullScreen;
- (_Bool)enableTopVideo;
- (_Bool)isTopVideoEnterFullScreen;

@end

