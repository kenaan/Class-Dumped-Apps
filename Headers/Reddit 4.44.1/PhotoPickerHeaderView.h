//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionReusableView.h>

@class BaseButton;

@interface PhotoPickerHeaderView : BaseCollectionReusableView
{
    BaseButton *_cameraButton;
    BaseButton *_imagePickerButton;
}

@property(retain, nonatomic) BaseButton *imagePickerButton; // @synthesize imagePickerButton=_imagePickerButton;
@property(retain, nonatomic) BaseButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
