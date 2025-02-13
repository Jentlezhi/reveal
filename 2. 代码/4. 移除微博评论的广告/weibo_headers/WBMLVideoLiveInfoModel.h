//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

#import "WBSharingObject-Protocol.h"

@class NSDictionary, NSString, WBMLVideoGoodsModel, WBMLVideoGuideInfoListModel, WBMLVideoLiveLivingInfoModel, WBMLVideoPayLiveModel, WBMLVideoShareInfoModel, WBMLVideoUserInfoModel, WBTimelinePageInfo, WBTimelineURL;

@interface WBMLVideoLiveInfoModel : WBMLBaseModel <WBSharingObject>
{
    _Bool _show_buygoods_button;
    _Bool _allow_comment;
    _Bool _hidden_comments;
    _Bool _allow_praise;
    _Bool _allow_attitude;
    _Bool _screen_mirror_display;
    int _forbid_buy_gift;
    unsigned long long _status;
    NSString *_push_url;
    NSDictionary *_stream_info;
    NSString *_live_ld;
    NSString *_live_hd;
    NSString *_rtmp_ld;
    NSString *_rtmp_hd;
    NSString *_live_flv_ld;
    NSString *_live_flv_hd;
    NSString *_replay_ld;
    NSString *_replay_hd;
    long long _live_width;
    long long _live_height;
    NSString *_live_id;
    WBMLVideoLiveLivingInfoModel *_living_info;
    WBMLVideoUserInfoModel *_owner_info;
    WBMLVideoGoodsModel *_buygoods_info;
    long long _play_count;
    long long _is_premium;
    WBMLVideoPayLiveModel *_premium_info;
    NSString *_shareTipText;
    WBMLVideoShareInfoModel *_share_info;
    NSString *_container_id;
    NSString *_cover;
    NSString *_cover_path;
    NSString *_title;
    NSString *_mid;
    long long _force_follow;
    NSString *_notification;
    WBMLVideoGuideInfoListModel *_guide_info;
    NSDictionary *_screen_mirror_info;
}

@property(retain, nonatomic) NSDictionary *screen_mirror_info; // @synthesize screen_mirror_info=_screen_mirror_info;
@property(nonatomic) _Bool screen_mirror_display; // @synthesize screen_mirror_display=_screen_mirror_display;
@property(retain, nonatomic) WBMLVideoGuideInfoListModel *guide_info; // @synthesize guide_info=_guide_info;
@property(copy, nonatomic) NSString *notification; // @synthesize notification=_notification;
@property(nonatomic) long long force_follow; // @synthesize force_follow=_force_follow;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(nonatomic) int forbid_buy_gift; // @synthesize forbid_buy_gift=_forbid_buy_gift;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cover_path; // @synthesize cover_path=_cover_path;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *container_id; // @synthesize container_id=_container_id;
@property(retain, nonatomic) WBMLVideoShareInfoModel *share_info; // @synthesize share_info=_share_info;
@property(copy, nonatomic) NSString *shareTipText; // @synthesize shareTipText=_shareTipText;
@property(nonatomic) _Bool allow_attitude; // @synthesize allow_attitude=_allow_attitude;
@property(nonatomic) _Bool allow_praise; // @synthesize allow_praise=_allow_praise;
@property(nonatomic) _Bool hidden_comments; // @synthesize hidden_comments=_hidden_comments;
@property(nonatomic) _Bool allow_comment; // @synthesize allow_comment=_allow_comment;
@property(retain, nonatomic) WBMLVideoPayLiveModel *premium_info; // @synthesize premium_info=_premium_info;
@property(nonatomic) long long is_premium; // @synthesize is_premium=_is_premium;
@property(nonatomic) long long play_count; // @synthesize play_count=_play_count;
@property(retain, nonatomic) WBMLVideoGoodsModel *buygoods_info; // @synthesize buygoods_info=_buygoods_info;
@property(nonatomic) _Bool show_buygoods_button; // @synthesize show_buygoods_button=_show_buygoods_button;
@property(retain, nonatomic) WBMLVideoUserInfoModel *owner_info; // @synthesize owner_info=_owner_info;
@property(retain, nonatomic) WBMLVideoLiveLivingInfoModel *living_info; // @synthesize living_info=_living_info;
@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(nonatomic) long long live_height; // @synthesize live_height=_live_height;
@property(nonatomic) long long live_width; // @synthesize live_width=_live_width;
@property(copy, nonatomic) NSString *replay_hd; // @synthesize replay_hd=_replay_hd;
@property(copy, nonatomic) NSString *replay_ld; // @synthesize replay_ld=_replay_ld;
@property(copy, nonatomic) NSString *live_flv_hd; // @synthesize live_flv_hd=_live_flv_hd;
@property(copy, nonatomic) NSString *live_flv_ld; // @synthesize live_flv_ld=_live_flv_ld;
@property(copy, nonatomic) NSString *rtmp_hd; // @synthesize rtmp_hd=_rtmp_hd;
@property(copy, nonatomic) NSString *rtmp_ld; // @synthesize rtmp_ld=_rtmp_ld;
@property(copy, nonatomic) NSString *live_hd; // @synthesize live_hd=_live_hd;
@property(copy, nonatomic) NSString *live_ld; // @synthesize live_ld=_live_ld;
@property(retain, nonatomic) NSDictionary *stream_info; // @synthesize stream_info=_stream_info;
@property(copy, nonatomic) NSString *push_url; // @synthesize push_url=_push_url;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
@property(readonly, nonatomic) long long extraMessageUid;
- (id)extraMessageID;
- (long long)extraMessageType;
@property(readonly, nonatomic) long long composeSharingType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

