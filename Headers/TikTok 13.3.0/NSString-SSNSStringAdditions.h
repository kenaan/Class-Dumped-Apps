//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SSNSStringAdditions)
+ (id)hexStringFromString:(id)arg1;
- (id)componentsSeparatedByRegex:(id)arg1 ranges:(id *)arg2 checkingResults:(id *)arg3;
- (id)componentsSeparatedByRegex:(id)arg1 regexRanges:(id *)arg2;
- (id)componentsSeparatedByRegex:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 paragraphStyle:(id)arg3;
- (struct CGSize)sizeWithFontCompatible:(id)arg1;
- (id)SHA1String;
- (id)SHA256String;
- (id)trimmed;
- (id)MD5HashString;
- (id)stringDocumentsPath;
- (id)stringCachePath;
@end

