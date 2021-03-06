//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol AWEMVTemplateModelDelegate;

@interface AWEMVTemplateModel : NSObject
{
    id <AWEMVTemplateModelDelegate> _delegate;
    NSArray *_templateModels;
    NSMutableDictionary *_mvChallengeNameDict;
    NSArray *_urlPrefix;
    NSMutableDictionary *_effectModelTemplateInfos;
    NSMutableDictionary *_downloadingProgress;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *downloadingProgress; // @synthesize downloadingProgress=_downloadingProgress;
@property(retain, nonatomic) NSMutableDictionary *effectModelTemplateInfos; // @synthesize effectModelTemplateInfos=_effectModelTemplateInfos;
@property(copy, nonatomic) NSArray *urlPrefix; // @synthesize urlPrefix=_urlPrefix;
@property(retain, nonatomic) NSMutableDictionary *mvChallengeNameDict; // @synthesize mvChallengeNameDict=_mvChallengeNameDict;
@property(copy, nonatomic) NSArray *templateModels; // @synthesize templateModels=_templateModels;
@property(nonatomic) __weak id <AWEMVTemplateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)templateInfoForModel:(id)arg1;
- (void)makeMVTemplateFirst:(id)arg1;
- (void)downloadMaterialForModel:(id)arg1;
- (id)downloadProgressForModel:(id)arg1;
- (long long)templateTypeForModel:(id)arg1;
- (id)templatePicFillMode:(id)arg1;
- (long long)templatePicInputHeight:(id)arg1;
- (long long)templatePicInputWidth:(id)arg1;
- (long long)templateMaxMaterialForModel:(id)arg1;
- (long long)templateMinMaterialForModel:(id)arg1;
- (id)templatePictureCoverURLForModel:(id)arg1;
- (id)templateVideoCoverURLForModel:(id)arg1;
- (void)setUpPlaceholderData;
- (void)reloadDataFromCache;
- (void)checkAndUpdatePhotoMovieTemplate;
- (id)init;

@end

