//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTLabelTextHelper : NSObject
{
}

+ (id)parseEmojiInTextKitContext:(id)arg1 fontSize:(double)arg2;
+ (id)_attributesWithFontSize:(double)arg1 lineHeight:(double)arg2 lineBreakMode:(long long)arg3 isBoldFontStyle:(_Bool)arg4 firstLineIndent:(double)arg5 textAlignment:(long long)arg6;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 lineBreakMode:(long long)arg4 isBoldFontStyle:(_Bool)arg5 firstLineIndent:(double)arg6 textAlignment:(long long)arg7;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 lineBreakMode:(long long)arg4 isBoldFontStyle:(_Bool)arg5 firstLineIndent:(double)arg6;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 lineBreakMode:(long long)arg4 isBoldFontStyle:(_Bool)arg5;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 lineBreakMode:(long long)arg4;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3;
+ (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2;
+ (_Bool)_shouldHandleJailBrokenCase;
+ (struct CGSize)sizeOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5 firstLineIndent:(double)arg6 textAlignment:(long long)arg7 lineBreakMode:(long long)arg8;
+ (struct CGSize)sizeOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5 firstLineIndent:(double)arg6 textAlignment:(long long)arg7;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5 firstLineIndent:(double)arg6 textAlignment:(long long)arg7 lineBreakMode:(long long)arg8;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5 firstLineIndent:(double)arg6 textAlignment:(long long)arg7;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5 firstLineIndent:(double)arg6;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4 constraintToMaxNumberOfLines:(long long)arg5;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 forLineHeight:(double)arg4;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3 constraintToMaxNumberOfLines:(long long)arg4;
+ (double)heightOfText:(id)arg1 fontSize:(double)arg2 forWidth:(double)arg3;
+ (CDUnknownBlockType)emojiParseInTextKitBlock;
+ (void)setEmojiParseInTextKitBlock:(CDUnknownBlockType)arg1;

@end

