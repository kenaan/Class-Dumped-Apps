//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, YTEditDrishtiFilterPickerViewController;

@protocol YTEditDrishtiFilterPickerDelegate <NSObject>
- (void)didSelectEffectID:(NSString *)arg1 withThumbnail:(UIImage *)arg2;

@optional
- (void)filterPickerDidRenderThumbnails:(YTEditDrishtiFilterPickerViewController *)arg1;
@end

