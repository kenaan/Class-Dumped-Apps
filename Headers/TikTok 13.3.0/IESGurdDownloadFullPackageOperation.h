//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESGurdBaseDownloadOperation.h"

@interface IESGurdDownloadFullPackageOperation : IESGurdBaseDownloadOperation
{
}

- (id)packagePath;
- (_Bool)moveFileWithTempPackagePath:(id)arg1 targetPath:(id)arg2 error:(id *)arg3;
- (_Bool)checkFileMd5WithPackagePath:(id)arg1 md5:(id)arg2 error:(id *)arg3;
- (void)handleDownloadResultWithPathURL:(id)arg1 downloadInfo:(id)arg2 networkError:(id)arg3;
- (_Bool)isPatch;
- (void)operationDidStart;

@end

