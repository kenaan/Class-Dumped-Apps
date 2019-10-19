//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMEmoticonDataManagerProtocol-Protocol.h"

@class AWEIMEmoticonInfoModel, NSArray, NSCache, NSDictionary, NSString, UIImage;

@interface AWEIMEmoticonDataManager : NSObject <AWEIMEmoticonDataManagerProtocol>
{
    UIImage *_resizablePlaceholderImage;
    NSArray *_staticEmoticons;
    NSArray *_localEmotionInfos;
    NSArray *_fullStaticEmoticons;
    NSDictionary *_dynamicEmotions;
    NSArray *_localStaticEmiticonInfos;
    NSCache *_emoticonCache;
    NSDictionary *_emoticonYYTextMapper;
}

+ (id)sharedInstance;
@property(retain) NSDictionary *emoticonYYTextMapper; // @synthesize emoticonYYTextMapper=_emoticonYYTextMapper;
@property(retain) NSCache *emoticonCache; // @synthesize emoticonCache=_emoticonCache;
@property(retain, nonatomic) NSArray *localStaticEmiticonInfos; // @synthesize localStaticEmiticonInfos=_localStaticEmiticonInfos;
@property(retain, nonatomic) NSDictionary *dynamicEmotions; // @synthesize dynamicEmotions=_dynamicEmotions;
@property(retain, nonatomic) NSArray *fullStaticEmoticons; // @synthesize fullStaticEmoticons=_fullStaticEmoticons;
@property(retain, nonatomic) NSArray *localEmotionInfos; // @synthesize localEmotionInfos=_localEmotionInfos;
@property(retain, nonatomic) NSArray *staticEmoticons; // @synthesize staticEmoticons=_staticEmoticons;
- (void).cxx_destruct;
- (id)plainTextForAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)plainTextForAttributedString:(id)arg1;
- (void)setBackStringForAttributedString:(id)arg1 backedString:(id)arg2 range:(struct _NSRange)arg3;
- (id)emoticonWithName:(id)arg1;
- (id)mathEmoticonsForString:(id)arg1;
- (void)stickerDownloaded:(id)arg1;
@property(readonly, nonatomic) AWEIMEmoticonInfoModel *gifInfoModel;
@property(readonly, nonatomic) AWEIMEmoticonInfoModel *customInfoModel;
- (void)setUp;
- (id)emoticonImageNamed:(id)arg1;
- (long long)rowsPerPage:(id)arg1;
- (long long)columnsPerPage:(id)arg1;
- (id)removeNOTranslationTagForContent:(id)arg1;
- (id)addNOTranslationTagForContent:(id)arg1;
- (id)decodeWithText:(id)arg1 companyTemplate:(id)arg2 linkArray:(id)arg3 font:(id)arg4 isCompany:(_Bool)arg5 linkTapAction:(CDUnknownBlockType)arg6 type:(unsigned long long)arg7;
- (id)decodeWithText:(id)arg1 template:(id)arg2 font:(id)arg3 linkTapAction:(CDUnknownBlockType)arg4 type:(unsigned long long)arg5;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)arg1 font:(id)arg2 emojiSize:(struct CGSize)arg3 type:(unsigned long long)arg4;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)arg1 font:(id)arg2 type:(unsigned long long)arg3;
- (void)matchEmoticonToYYTextAttachmentForAttributedString:(id)arg1 font:(id)arg2;
- (void)matchEmoticonForAttributedString:(id)arg1 font:(id)arg2;
- (long long)emoticonNumberOfPerPage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

