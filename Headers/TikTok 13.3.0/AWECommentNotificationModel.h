//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, AWECommentModel, AWERelationDynamicLable, NSString;

@interface AWECommentNotificationModel : AWEBaseApiModel
{
    AWECommentModel *_comment;
    AWEAwemeModel *_aweme;
    NSString *_content;
    long long _noticeType;
    AWECommentModel *_replyComment;
    AWECommentModel *_level1Comment;
    AWERelationDynamicLable *_relationLabel;
    NSString *_forWardID;
    NSString *_labelText;
    double _commentH;
    double _nameW;
    double _desAndTimeH;
    NSString *_descAndTime;
    struct CGSize _deleteInfoSize;
}

+ (id)relationLabelJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) struct CGSize deleteInfoSize; // @synthesize deleteInfoSize=_deleteInfoSize;
@property(retain, nonatomic) NSString *descAndTime; // @synthesize descAndTime=_descAndTime;
@property(nonatomic) double desAndTimeH; // @synthesize desAndTimeH=_desAndTimeH;
@property(nonatomic) double nameW; // @synthesize nameW=_nameW;
@property(nonatomic) double commentH; // @synthesize commentH=_commentH;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(copy, nonatomic) NSString *forWardID; // @synthesize forWardID=_forWardID;
@property(retain, nonatomic) AWERelationDynamicLable *relationLabel; // @synthesize relationLabel=_relationLabel;
@property(retain, nonatomic) AWECommentModel *level1Comment; // @synthesize level1Comment=_level1Comment;
@property(retain, nonatomic) AWECommentModel *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) long long noticeType; // @synthesize noticeType=_noticeType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(retain, nonatomic) AWECommentModel *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (_Bool)shouldShowCover;
- (_Bool)shouldShowComment;

@end

