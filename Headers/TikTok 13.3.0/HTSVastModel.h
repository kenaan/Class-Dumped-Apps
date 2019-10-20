//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSVastElementModel.h"

@class AWEAdTrackContext, AWEOriginalAdModel, HTSVastInLineModel, HTSVastWrapperModel, NSArray, NSNumber;

@interface HTSVastModel : HTSVastElementModel
{
    NSNumber *_vastVersion;
    HTSVastInLineModel *_inLine;
    HTSVastWrapperModel *_wrapper;
    HTSVastModel *_preVast;
}

+ (id)vastModelWithXMLString:(id)arg1 error:(id *)arg2;
+ (id)vastModelWithXMLData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HTSVastModel *preVast; // @synthesize preVast=_preVast;
@property(retain, nonatomic) HTSVastWrapperModel *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) HTSVastInLineModel *inLine; // @synthesize inLine=_inLine;
@property(retain, nonatomic) NSNumber *vastVersion; // @synthesize vastVersion=_vastVersion;
- (void).cxx_destruct;
- (id)trackListWithTagName:(id)arg1;
- (id)clickThroughTrackList;
- (id)impressionTrackList;
- (id)clickTrackList;
- (id)iconListWithProgramName:(id)arg1;
@property(readonly, nonatomic) NSArray *adChoicesIconList;
@property(readonly, nonatomic) NSArray *avatarIconList;
@property(nonatomic) __weak AWEOriginalAdModel *adModel;
- (void)trackWithURLStrings:(id)arg1 aweme:(id)arg2 trackLabel:(id)arg3;
- (void)trackWithAweme:(id)arg1 trackLabel:(id)arg2 trackingBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) AWEAdTrackContext *trackContext;

@end
