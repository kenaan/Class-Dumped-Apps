//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HTSLiveTemplateProvider, IESLiveSettings;

@interface HTSLiveRemoteCommandParser : NSObject
{
    id <IESLiveSettings> _settings;
    id <HTSLiveTemplateProvider> _templateProvider;
}

@property(retain, nonatomic) id <HTSLiveTemplateProvider> templateProvider; // @synthesize templateProvider=_templateProvider;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)parseNewTip:(id)arg1;
- (id)commandFromURLString:(id)arg1;

@end

