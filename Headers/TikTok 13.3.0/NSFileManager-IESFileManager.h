//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IESFileManager)
- (id)uniqueID;
- (id)uniqueURLWithPrefix:(id)arg1 withSuffix:(id)arg2;
- (id)IES_createFinalURL;
- (id)IES_createRecordURLWithWav:(_Bool)arg1;
- (id)IES_audiocacheDirPath;
- (id)IES_videoCacheDirPath;
- (id)IES_duetResultVideoTmpPath;
- (id)IES_duetAudioM4aTmpPath;
- (id)IES_privateDataPath;
- (id)tempWorkspaceFilePath;
- (void)createDirectoryIfNeeded:(id)arg1;
- (id)IES_pathForPrivateFile:(id)arg1;
@end

