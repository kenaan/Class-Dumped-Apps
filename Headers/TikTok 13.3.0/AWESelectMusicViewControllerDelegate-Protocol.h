//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWESelectMusicViewController, NSArray;

@protocol AWESelectMusicViewControllerDelegate <NSObject>
- (_Bool)selectMusicViewControllerDisablePhotoPicking:(AWESelectMusicViewController *)arg1;
- (_Bool)selectMusicViewControllerShouldStartClipPorcedure:(AWESelectMusicViewController *)arg1;
- (void)selectMusicViewController:(AWESelectMusicViewController *)arg1 didFinishFetch:(NSArray *)arg2 locationInfos:(NSArray *)arg3;
@end

