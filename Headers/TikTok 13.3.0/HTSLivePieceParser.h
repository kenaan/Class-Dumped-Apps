//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSParagraphStyle;
@protocol HTSLiveTemplateProvider, IESLiveEnvironment, IESLiveSettings, IESLiveWebImageService;

@interface HTSLivePieceParser : NSObject
{
    NSParagraphStyle *_paragraphStyle;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _settings;
    id <HTSLiveTemplateProvider> _templateProvider;
    id <IESLiveWebImageService> _imageService;
}

@property(retain, nonatomic) id <IESLiveWebImageService> imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
- (void).cxx_destruct;
- (id)createPrefixIcon:(id)arg1 configuration:(id)arg2;
- (id)fansIconList:(id)arg1;
- (id)gradeNewIconList:(id)arg1;
- (id)getIconKeyByModel:(id)arg1;
- (id)composeIconWithImage:(id)arg1 title:(id)arg2;
- (id)getMedalIcon:(id)arg1;
- (id)composeNobleIconWithImage:(id)arg1 level:(id)arg2;
- (id)getNobleIcon:(id)arg1;
- (id)getFansclubIcon:(id)arg1;
- (id)getDiggImageWithColorString:(id)arg1;
- (id)attributesWith:(id)arg1;
- (id)handlePatternPiece:(id)arg1 defaultFormat:(id)arg2 configuration:(id)arg3;
- (id)handleHeartPiece:(id)arg1 configuration:(id)arg2;
- (id)handleGiftPiece:(id)arg1 defaultFormat:(id)arg2 isRTL:(_Bool *)arg3 configuration:(id)arg4;
- (id)handleUserPiece:(id)arg1 defaultFormat:(id)arg2 isRTL:(_Bool *)arg3 configuration:(id)arg4;
- (id)handleStringPiece:(id)arg1 defaultFormat:(id)arg2 isRTL:(_Bool *)arg3 configuration:(id)arg4;

@end

