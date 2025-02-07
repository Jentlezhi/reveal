//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@protocol XMRouterUnifiedURLProtocol <NSObject>
- (void)xmRouter_disabled_verify:(long long)arg1;
- (void)xmRouter_miniprogram_open:(NSString *)arg1 extra:(NSString *)arg2;
- (void)xmRouter_sea_soundChat:(long long)arg1 sourceId:(NSString *)arg2;
- (void)xmRouter_record_soundPublished:(long long)arg1;
- (void)xmRouter_web_openRedeem:(NSString *)arg1;
- (void)xmRouter_radio_tab;
- (void)xmRouter_app_findPage:(NSString *)arg1;
- (void)xmRouter_mine_setting:(NSString *)arg1;
- (void)xmRouter_app_anchorHeadline;
- (void)xmRouter_app_dailyTing:(NSString *)arg1;
- (void)xmRouter_app_voiceSearch:(NSString *)arg1;
- (void)xmRouter_app_search:(NSString *)arg1;
- (void)xmRouter_app_subscribe:(NSString *)arg1;
- (void)xmRouter_app_download:(NSString *)arg1;
- (void)xmRouter_app_history:(NSString *)arg1;
- (void)xmRouter_app_wekeBuy:(NSDictionary *)arg1;
- (void)xmRouter_app_groupBuy:(NSDictionary *)arg1;
- (void)xmRouter_RN_open:(NSDictionary *)arg1;
- (void)xmRouter_web_open:(NSURL *)arg1;
- (void)xmRouter_push_live:(NSDictionary *)arg1;
- (void)xmRouter_app_chooseCity;
- (void)xmRouter_app_bindAccount;
- (void)xmRouter_app_bindPhone:(NSString *)arg1;
- (void)xmRouter_app_login:(NSString *)arg1;
- (void)xmRouter_home_momentPublish:(NSString *)arg1;
- (void)xmRouter_home_localListen:(NSString *)arg1 cityName:(NSString *)arg2;
- (void)xmRouter_home_best;
- (void)xmRouter_home_Square:(unsigned long long)arg1;
- (void)xmRouter_home_guessMore;
- (void)xmRouter_broadcast_cityList;
- (void)xmRouter_broadcast_sourceList:(NSString *)arg1 title:(NSString *)arg2 categoryId:(NSString *)arg3;
- (void)xmRouter_broadcast_channel:(long long)arg1;
- (void)xmRouter_category_pay:(long long)arg1 title:(NSString *)arg2;
- (void)xmRouter_category_filter:(long long)arg1 title:(NSString *)arg2 metadatas:(NSString *)arg3 calcDimension:(NSString *)arg4 eventId:(NSString *)arg5;
- (void)xmRouter_category_tags:(long long)arg1 title:(NSString *)arg2 metadataStr:(NSString *)arg3 needToAll:(NSNumber *)arg4 eventId:(NSString *)arg5;
- (void)xmRouter_category_detail:(long long)arg1 title:(NSString *)arg2 eventId:(NSString *)arg3;
- (void)xmRouter_mySetting_editInfo:(NSString *)arg1;
- (void)xmRouter_finder_topicInfo:(long long)arg1;
- (void)xmRouter_base_channelVip:(NSString *)arg1;
- (void)xmRouter_search_xmBook:(long long)arg1;
- (void)xmRouter_search_hotwordList:(long long)arg1 keywordId:(long long)arg2 title:(NSString *)arg3;
- (void)xmRouter_kacha_findDiscoveryEntrance;
- (void)xmRouter_dubbing_Personal:(long long)arg1;
- (void)xmRouter_dubbing_TopicChallengeInfo:(long long)arg1;
- (void)xmRouter_dubbing_GivenTemplate:(long long)arg1 source:(NSString *)arg2;
- (void)xmRouter_dubbing_GivenResource:(long long)arg1 tagIDs:(NSArray *)arg2 orderType:(NSString *)arg3 title:(NSString *)arg4 communityId:(long long)arg5;
- (void)xmRouter_dubbing_findEntrance;
- (void)xmRouter_dubbing_playDubbing:(long long)arg1 trackList:(NSArray *)arg2 pageId:(long long)arg3 limit:(long long)arg4 sourceType:(long long)arg5 topicId:(long long)arg6 themeId:(long long)arg7 voiceTopicName:(NSString *)arg8 voiceTopicTemplateId:(long long)arg9 extra:(NSDictionary *)arg10;
- (void)xmRouter_dubbing_resoucreChoose:(NSString *)arg1 name:(NSString *)arg2 src:(NSString *)arg3;
- (void)xmRouter_dubbing_recommendStream;
- (void)xmRouter_microCourse_live:(long long)arg1 discussId:(long long)arg2;
- (void)xmRouter_microCourse_myCourses:(long long)arg1 channel:(NSString *)arg2;
- (void)xmRouter_microCourse_dynamic;
- (void)xmRouter_microCourse_availableCoupons:(NSString *)arg1 couponId:(long long)arg2;
- (void)xmRouter_microCourse_category:(NSString *)arg1 channel:(NSString *)arg2;
- (void)xmRouter_microCourse_purchased;
- (void)xmRouter_microCourse_home:(NSString *)arg1;
- (void)xmRouter_microCourse_open:(NSString *)arg1 lessonType:(NSString *)arg2 channel:(NSString *)arg3;
- (void)xmRouter_cycle_community:(long long)arg1 commentId:(long long)arg2;
- (void)xmRouter_cycle_dynamic:(long long)arg1;
- (void)xmRouter_cycle_topicCalendar:(long long)arg1 date:(NSString *)arg2;
- (void)xmRouter_cycle_openV2:(long long)arg1 sectionId:(long long)arg2 categoryId:(long long)arg3 autoJoin:(_Bool)arg4 type:(long long)arg5;
- (void)xmRouter_cycle_open;
- (void)xmRouter_news_go:(long long)arg1;
- (void)xmRouter_news_toutiao:(long long)arg1 tabId:(NSString *)arg2 event:(NSString *)arg3;
- (void)xmRouter_services_workDetail:(long long)arg1 opGroup:(NSString *)arg2 status:(long long)arg3 opName:(NSString *)arg4 created:(long long)arg5 processTime:(long long)arg6;
- (void)xmRouter_services_workList;
- (void)xmRouter_services_chat;
- (void)xmRouter_live_pupilControll:(long long)arg1;
- (void)xmRouter_live_firstRecharge:(NSDictionary *)arg1;
- (void)xmRouter_live_create:(NSDictionary *)arg1;
- (void)xmRouter_live_finishedList:(NSDictionary *)arg1;
- (void)xmRouter_live_managerListInRoom:(NSDictionary *)arg1;
- (void)xmRouter_live_home:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_live_openRoom:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_live_detail:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_pay_commonList:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_pay_subChannel:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_pay_category:(NSDictionary *)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_pay_recharge:(NSNumber *)arg1 productId:(NSString *)arg2 eventId:(NSString *)arg3;
- (void)xmRouter_pay_wallet:(NSString *)arg1;
- (void)xmRouter_pay_purchased;
- (void)xmRouter_pay_buyNetworkflow;
- (void)xmRouter_activity_clusterRankingList:(long long)arg1 clusterType:(long long)arg2 rankingListId:(long long)arg3;
- (void)xmRouter_activity_comments:(long long)arg1;
- (void)xmRouter_activity_rankingList2;
- (void)xmRouter_activity_rankingList:(NSString *)arg1 redisKey:(NSString *)arg2 clusterId:(long long)arg3 title:(NSString *)arg4 rankingListId:(long long)arg5 eventId:(NSString *)arg6;
- (void)xmRouter_activity_open:(long long)arg1 trackId:(long long)arg2 eventId:(NSString *)arg3;
- (void)xmRouter_audience_listenTrackList:(long long)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_audience_findFriends:(NSString *)arg1;
- (void)xmRouter_anchor_promptClickRate:(long long)arg1;
- (void)xmRouter_anchor_bigshot:(NSString *)arg1 title:(NSString *)arg2 category:(NSString *)arg3;
- (void)xmRouter_anchor_myWork;
- (void)xmRouter_anchor_payedAlbumComments;
- (void)xmRouter_anchor_manageCenter:(NSString *)arg1;
- (void)xmRouter_anchor_fans:(NSString *)arg1;
- (void)xmRouter_anchor_receiveComments:(NSString *)arg1;
- (void)xmRouter_anchor_info:(long long)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_video_info:(long long)arg1 recSrc:(NSString *)arg2 recTrack:(NSString *)arg3;
- (void)xmRouter_track_allReadrRecord:(NSDictionary *)arg1;
- (void)xmRouter_track_upload:(long long)arg1 eventId:(NSString *)arg2;
- (void)xmRouter_track_info_show;
- (void)xmRouter_track_info:(long long)arg1 lvFlag:(_Bool)arg2 showInfo:(_Bool)arg3 showRich:(_Bool)arg4 subjectId:(long long)arg5 recSrc:(NSString *)arg6 recTrack:(NSString *)arg7 eventId:(NSString *)arg8;
- (void)xmRouter_album_edit:(long long)arg1;
- (void)xmRouter_album_info:(long long)arg1 recSrc:(NSString *)arg2 recTrack:(NSString *)arg3 trackId:(long long)arg4 isFromAd:(_Bool)arg5 eventId:(NSString *)arg6 context:(NSString *)arg7;
- (void)xmRouter_interact_group:(long long)arg1;
- (void)xmRouter_interact_groupInfo:(long long)arg1;
- (void)xmRouter_interact_friendsGroupNotify;
- (void)xmRouter_interact_groupBroadcastNotify;
- (void)xmRouter_interact_groupTopicNotify;
- (void)xmRouter_interact_inviteToGroup:(long long)arg1 openType:(long long)arg2 albumId:(long long)arg3;
- (void)xmRouter_interact_privateMsg:(long long)arg1;
@end

