//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESEffectSDKParser : NSObject
{
    unsigned long long _imageType;
    NSString *_imageName;
}

@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (void)parseConfigJson:(id)arg1;
- (id)getImagePathWithFilterPath:(id)arg1;

@end

