//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEIMBannerIconConfig, NSString;

@interface AWEIMProjectXConfig : AWEBaseApiModel
{
    NSString *_im_x_alert_install_profile_title;
    NSString *_im_x_alert_install_transfer_title;
    NSString *_im_x_download_url;
    NSString *_im_x_share_board_im_title;
    NSString *_im_x_chat_no_unread_msg_title;
    unsigned long long _im_x_chat_subtitle_style;
    NSString *_im_x_chat_msg_subtitle;
    NSString *_im_x_chat_installed_button_title;
    NSString *_im_x_chat_no_installed_button_title;
    unsigned long long _im_x_chat_list_style;
    NSString *_im_x_story_detail_input_placeholder;
    NSString *_im_x_videoRedEnvelopeMessage;
    NSString *_im_x_redEnvelopeMessage;
    NSString *_im_x_tail_install_title;
    AWEIMBannerIconConfig *_im_x_profile_send_msg_btn_icon_config;
    AWEIMBannerIconConfig *_im_x_profile_more_send_msg_btn_icon_config;
    AWEIMBannerIconConfig *_im_x_contact_send_msg_icon_config;
    AWEIMBannerIconConfig *_im_x_chat_no_unread_msg_icon_config;
    AWEIMBannerIconConfig *_im_x_chat_list_banner_icon_config;
    AWEIMBannerIconConfig *_im_x_chat_list_banner_bg_config;
    AWEIMBannerIconConfig *_im_x_story_detail_input_icon_config;
    AWEIMBannerIconConfig *_im_x_share_board_im_icon_config;
    AWEIMBannerIconConfig *_im_x_publish_board_im_icon_config;
    AWEIMBannerIconConfig *_im_x_share_board_im_red_envelope_icon_config;
    AWEIMBannerIconConfig *_im_x_story_response_my_story_icon_config;
}

+ (id)im_x_story_response_my_story_icon_configJSONTransformer;
+ (id)im_x_share_board_im_red_envelope_icon_configJSONTransformer;
+ (id)im_x_publish_board_im_icon_configJSONTransformer;
+ (id)im_x_share_board_im_icon_configJSONTransformer;
+ (id)im_x_story_detail_input_icon_configJSONTransformer;
+ (id)im_x_contact_send_msg_icon_configJSONTransformer;
+ (id)im_x_chat_list_banner_bg_configJSONTransformer;
+ (id)im_x_chat_list_banner_icon_configJSONTransformer;
+ (id)im_x_chat_no_unread_msg_icon_configJSONTransformer;
+ (id)im_x_profile_more_send_msg_icon_configJSONTransformer;
+ (id)im_x_profile_send_msg_btn_icon_configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_story_response_my_story_icon_config; // @synthesize im_x_story_response_my_story_icon_config=_im_x_story_response_my_story_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_share_board_im_red_envelope_icon_config; // @synthesize im_x_share_board_im_red_envelope_icon_config=_im_x_share_board_im_red_envelope_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_publish_board_im_icon_config; // @synthesize im_x_publish_board_im_icon_config=_im_x_publish_board_im_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_share_board_im_icon_config; // @synthesize im_x_share_board_im_icon_config=_im_x_share_board_im_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_story_detail_input_icon_config; // @synthesize im_x_story_detail_input_icon_config=_im_x_story_detail_input_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_chat_list_banner_bg_config; // @synthesize im_x_chat_list_banner_bg_config=_im_x_chat_list_banner_bg_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_chat_list_banner_icon_config; // @synthesize im_x_chat_list_banner_icon_config=_im_x_chat_list_banner_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_chat_no_unread_msg_icon_config; // @synthesize im_x_chat_no_unread_msg_icon_config=_im_x_chat_no_unread_msg_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_contact_send_msg_icon_config; // @synthesize im_x_contact_send_msg_icon_config=_im_x_contact_send_msg_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_profile_more_send_msg_btn_icon_config; // @synthesize im_x_profile_more_send_msg_btn_icon_config=_im_x_profile_more_send_msg_btn_icon_config;
@property(retain, nonatomic) AWEIMBannerIconConfig *im_x_profile_send_msg_btn_icon_config; // @synthesize im_x_profile_send_msg_btn_icon_config=_im_x_profile_send_msg_btn_icon_config;
@property(readonly, nonatomic) NSString *im_x_tail_install_title; // @synthesize im_x_tail_install_title=_im_x_tail_install_title;
@property(readonly, nonatomic) NSString *im_x_redEnvelopeMessage; // @synthesize im_x_redEnvelopeMessage=_im_x_redEnvelopeMessage;
@property(readonly, nonatomic) NSString *im_x_videoRedEnvelopeMessage; // @synthesize im_x_videoRedEnvelopeMessage=_im_x_videoRedEnvelopeMessage;
@property(retain, nonatomic) NSString *im_x_story_detail_input_placeholder; // @synthesize im_x_story_detail_input_placeholder=_im_x_story_detail_input_placeholder;
@property(nonatomic) unsigned long long im_x_chat_list_style; // @synthesize im_x_chat_list_style=_im_x_chat_list_style;
@property(retain, nonatomic) NSString *im_x_chat_no_installed_button_title; // @synthesize im_x_chat_no_installed_button_title=_im_x_chat_no_installed_button_title;
@property(retain, nonatomic) NSString *im_x_chat_installed_button_title; // @synthesize im_x_chat_installed_button_title=_im_x_chat_installed_button_title;
@property(retain, nonatomic) NSString *im_x_chat_msg_subtitle; // @synthesize im_x_chat_msg_subtitle=_im_x_chat_msg_subtitle;
@property(nonatomic) unsigned long long im_x_chat_subtitle_style; // @synthesize im_x_chat_subtitle_style=_im_x_chat_subtitle_style;
@property(retain, nonatomic) NSString *im_x_chat_no_unread_msg_title; // @synthesize im_x_chat_no_unread_msg_title=_im_x_chat_no_unread_msg_title;
@property(readonly, nonatomic) NSString *im_x_share_board_im_title; // @synthesize im_x_share_board_im_title=_im_x_share_board_im_title;
@property(retain, nonatomic) NSString *im_x_download_url; // @synthesize im_x_download_url=_im_x_download_url;
@property(retain, nonatomic) NSString *im_x_alert_install_transfer_title; // @synthesize im_x_alert_install_transfer_title=_im_x_alert_install_transfer_title;
@property(retain, nonatomic) NSString *im_x_alert_install_profile_title; // @synthesize im_x_alert_install_profile_title=_im_x_alert_install_profile_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *im_x_story_response_my_story_icon;
@property(readonly, nonatomic) NSString *im_x_share_board_im_red_envelope_icon;
@property(readonly, nonatomic) NSString *im_x_publish_board_im_icon;
@property(readonly, nonatomic) NSString *im_x_share_board_im_icon;
@property(readonly, nonatomic) NSString *im_x_story_detail_input_icon;
@property(readonly, nonatomic) NSString *im_x_chat_list_banner_bg;
@property(readonly, nonatomic) NSString *im_x_chat_list_banner_icon;
@property(readonly, nonatomic) NSString *im_x_chat_no_unread_msg_icon;
@property(readonly, nonatomic) NSString *im_x_contact_send_msg_icon;
@property(readonly, nonatomic) NSString *im_x_profile_more_send_msg_btn_icon;
@property(readonly, nonatomic) NSString *im_x_profile_send_msg_btn_icon;

@end

