//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineItem.h"

#import "WBPreloaderDataSource-Protocol.h"
#import "WBPromotionProvider-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, WBPageCard, WBPromotion, WBSnapshotShareCustomizeConfig, WBStatusComplaintInfo, WBStatusEditConfig, WBStatusExtraButtonInfo, WBStatusWPInfo, WBTimelineTimestampInfo, WBUniversalLongStatus, WBVideoInfo;

@interface WBUniversalStatus : WBTimelineItem <WBPromotionProvider, WBPreloaderDataSource>
{
    NSString *source;
    NSString *sourceScheme;
    NSString *favorID;
    NSString *rid;
    NSDate *originalDate;
    _Bool favorited;
    NSString *thumbnailImageURL;
    NSString *middleImageURL;
    NSString *originalImageURL;
    WBStatusWPInfo *wpInfo;
    WBStatusComplaintInfo *complaintInfo;
    unsigned long long retweetCount;
    unsigned long long commentCount;
    long long likeCount;
    struct CLLocationCoordinate2D location;
    double distance;
    NSDictionary *geoDetailInfo;
    _Bool isKeepTop;
    long long statusType;
    NSString *statusTypeName;
    NSString *adMark;
    NSString *feedGroupID;
    NSString *smartFeedID;
    unsigned long long statusLikeState;
    long long likeAttitudeType;
    NSArray *buttonModels;
    NSArray *dynamicButtons;
    NSArray *dynamicMenus;
    long long readCount;
    NSString *sharedUrl;
    long long sharedCount;
    _Bool _sourceUrlEnable;
    _Bool _isFold;
    _Bool _mblogMenuNewStyle;
    _Bool _deleted;
    _Bool _isDisableHeightlightTime;
    _Bool _isPaid;
    _Bool _editable;
    _Bool _hideFromPrefix;
    _Bool _showAttitudeBar;
    _Bool _isShowRTRegionButton;
    _Bool _specialFollowMenuShow;
    _Bool _isHasVote;
    int _componentHideFlag;
    int _isShowBulletin;
    int _commentReviewType;
    unsigned long long pendingCommentCount;
    NSString *directionGroupID;
    NSArray *pictures;
    WBUniversalStatus *retweetByStatus;
    long long recom_state;
    NSString *scheme;
    long long weiboIndex;
    double saveTime;
    WBTimelineTimestampInfo *timestampInfo;
    NSArray *products;
    NSDictionary *_sourceSchemeDict;
    NSString *_textSource;
    NSDictionary *_textSourceSchemeDict;
    NSString *_sourceUrl;
    NSString *_sourceType;
    NSDictionary *_placeDic;
    NSArray *_recentComments;
    long long _likeAttitudeType;
    NSMutableArray *_customAttitudes;
    NSString *_rewardScheme;
    NSDictionary *_adObject;
    long long _mostAttitudeType;
    unsigned long long _mblogLines;
    long long _weiboSafeValue;
    long long _picNum;
    NSArray *_dynamicMenusNew;
    long long _blockType;
    long long _mlevel;
    NSString *_bgPic;
    NSString *_bgType;
    NSString *_bgScheme;
    NSString *_bgCardId;
    NSDictionary *_bgStyleDic;
    NSString *_bgText;
    NSString *_full_text;
    NSArray *_feed_products;
    NSArray *_detail_products;
    NSDictionary *_promotionDic;
    NSString *_deleteWeiboText;
    long long _preloadType;
    NSDictionary *_continueTag;
    NSString *_preloadInfo;
    NSArray *_preloadArticleIDs;
    NSDictionary *_preloadData;
    WBUniversalLongStatus *_longStatus;
    long long _weiboVersion;
    WBStatusExtraButtonInfo *_extraButtonInfo;
    long long _visible;
    NSString *_readTimeType;
    NSString *_hotExt;
    NSString *_extraAnalysisParameter4Server;
    NSArray *_screenNameSurfix;
    NSArray *_screenNameNewSuffix;
    NSString *_retweetDisablePrompt;
    NSString *_commentDisablePrompt;
    NSString *_likeDisablePrompt;
    NSDictionary *_commentManageInfo;
    long long _contentAuth;
    NSString *_attitudeDynamicAdid;
    NSNumber *_mblogVipType;
    WBStatusEditConfig *_editConfig;
    NSString *_objExt;
    WBPageCard *_followCards;
    WBPageCard *_copyfollowCards;
    double _dateTimestamp;
    WBSnapshotShareCustomizeConfig *_snapshotShareCustomizeConfig;
    unsigned long long _showAdditionalIndication;
    NSString *_additionalIndicationIconURL;
    NSString *_additionalIndicationTips;
    NSString *_retweetNormalIconURL;
    NSString *_retweetDisabledIconURL;
    NSString *_commentNormalIconURL;
    NSString *_commentDisabledIconURL;
    NSString *_appid;
    long long _expireTime;
    long long _adState;
    NSString *_url_marked;
    NSString *_colorHex;
    long long _isOasisWeibo;
    NSString *_deletedBtnText;
    long long _repostType;
    NSString *_oriMid;
    NSDate *_delaySendDate;
    double _delaySendDateTimestamp;
    WBVideoInfo *_videoInfo;
}

+ (id)commonButtonIdsFromMblogLocalList:(id)arg1;
+ (void)updateStatusWithTagsDelete:(id)arg1 saveToDB:(id)arg2;
+ (void)updateStatusWithUserRelationship:(long long)arg1 userID:(id)arg2 saveToDB:(id)arg3;
+ (id)loadStatusWithID:(id)arg1 fromDB:(id)arg2;
+ (id)databaseMapDictionary;
+ (id)unwrapExtraProperties:(id)arg1;
+ (void)updateFwdCmtLikeCountOfStatus:(id)arg1 saveToDB:(id)arg2;
+ (void)updateProductWishStatus:(id)arg1 saveToDB:(id)arg2;
+ (void)updateReadsCountForStatus:(id)arg1 saveToDB:(id)arg2;
+ (void)updateLikeStateForStatus:(id)arg1 saveToDB:(id)arg2;
+ (void)setLikeState:(unsigned long long)arg1 forStatus:(id)arg2 saveToDB:(id)arg3;
+ (void)setLikeState:(unsigned long long)arg1 attitudeType:(long long)arg2 forStatus:(id)arg3 saveToDB:(id)arg4;
+ (void)deleteAllTrendItemsFromDB:(id)arg1 type:(id)arg2;
+ (void)deleteStatusFromDB:(id)arg1 statusIDs:(id)arg2 type:(id)arg3;
+ (_Bool)deleteStatusFromDB:(id)arg1 clientTaskID:(unsigned long long)arg2;
+ (void)deleteStatusFromDB:(id)arg1 clientItemIDs:(id)arg2 type:(id)arg3;
+ (_Bool)deleteStatusFromDB:(id)arg1 clientItemID:(id)arg2;
+ (void)deleteStatus:(id)arg1 fromDB:(id)arg2;
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2 olderThen:(id)arg3;
+ (void)deleteAllFromDB:(id)arg1 directionalGroupId:(id)arg2;
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2;
+ (void)deleteAllAndStandStatusFromDB:(id)arg1 type:(id)arg2;
+ (void)saveDictStatuses:(id)arg1 intoDB:(id)arg2 directionalGroupId:(id)arg3 shouldRemoveHistory:(_Bool)arg4;
+ (void)saveDictStatuses:(id)arg1 intoDB:(id)arg2 type:(id)arg3 shouldRemoveHistory:(_Bool)arg4;
+ (void)saveStatuses:(id)arg1 intoDB:(id)arg2 type:(id)arg3 removeHistory:(_Bool)arg4;
+ (void)saveDictStatus:(id)arg1 intoDB:(id)arg2 directionalGroupId:(id)arg3;
+ (void)saveDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3;
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 directionGroupId:(id)arg3;
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3;
+ (id)v3DictionaryArrayForStatuses:(id)arg1;
+ (id)v3DictionaryWithStatus:(id)arg1;
+ (id)dictionaryForStatus:(id)arg1;
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 directionGroupId:(id)arg3 feedPriority:(long long)arg4;
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3 feedPriority:(long long)arg4;
+ (id)generateDBExtraPropertiesFromV3Dictionary:(id)arg1;
+ (id)dictionaryRepresentationOfRecentComment:(id)arg1;
+ (id)recentCommentWithDictionary:(id)arg1;
+ (id)simplifiedRecentCommentDictionaryFromDictionary:(id)arg1;
+ (Class)quotedItemClass;
+ (_Bool)retweetableWithStatusType:(long long)arg1;
+ (void)mblogTypeAndVisibleWithStatusType:(long long)arg1 mblogType:(long long *)arg2 visible:(long long *)arg3;
+ (long long)statusTypeWithMBlogType:(long long)arg1 visible:(long long)arg2;
+ (id)arrayWithRepostList:(id)arg1;
+ (id)statusInRepostListWithDictionary:(id)arg1;
+ (id)keyForBaseColor:(int)arg1;
+ (void)initialize;
@property(retain, nonatomic) WBVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) double delaySendDateTimestamp; // @synthesize delaySendDateTimestamp=_delaySendDateTimestamp;
@property(retain, nonatomic) NSDate *delaySendDate; // @synthesize delaySendDate=_delaySendDate;
@property(retain, nonatomic) NSString *oriMid; // @synthesize oriMid=_oriMid;
@property(nonatomic) long long repostType; // @synthesize repostType=_repostType;
@property(retain, nonatomic) NSString *deletedBtnText; // @synthesize deletedBtnText=_deletedBtnText;
@property(nonatomic) long long isOasisWeibo; // @synthesize isOasisWeibo=_isOasisWeibo;
@property(nonatomic) _Bool isHasVote; // @synthesize isHasVote=_isHasVote;
@property(copy, nonatomic) NSString *colorHex; // @synthesize colorHex=_colorHex;
@property(nonatomic) _Bool specialFollowMenuShow; // @synthesize specialFollowMenuShow=_specialFollowMenuShow;
@property(nonatomic) _Bool isShowRTRegionButton; // @synthesize isShowRTRegionButton=_isShowRTRegionButton;
@property(retain, nonatomic) NSString *url_marked; // @synthesize url_marked=_url_marked;
@property(nonatomic) long long adState; // @synthesize adState=_adState;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *commentDisabledIconURL; // @synthesize commentDisabledIconURL=_commentDisabledIconURL;
@property(retain, nonatomic) NSString *commentNormalIconURL; // @synthesize commentNormalIconURL=_commentNormalIconURL;
@property(retain, nonatomic) NSString *retweetDisabledIconURL; // @synthesize retweetDisabledIconURL=_retweetDisabledIconURL;
@property(retain, nonatomic) NSString *retweetNormalIconURL; // @synthesize retweetNormalIconURL=_retweetNormalIconURL;
@property(nonatomic) _Bool showAttitudeBar; // @synthesize showAttitudeBar=_showAttitudeBar;
@property(retain, nonatomic) NSString *additionalIndicationTips; // @synthesize additionalIndicationTips=_additionalIndicationTips;
@property(retain, nonatomic) NSString *additionalIndicationIconURL; // @synthesize additionalIndicationIconURL=_additionalIndicationIconURL;
@property(nonatomic) unsigned long long showAdditionalIndication; // @synthesize showAdditionalIndication=_showAdditionalIndication;
@property(retain, nonatomic) WBSnapshotShareCustomizeConfig *snapshotShareCustomizeConfig; // @synthesize snapshotShareCustomizeConfig=_snapshotShareCustomizeConfig;
@property(nonatomic) double dateTimestamp; // @synthesize dateTimestamp=_dateTimestamp;
@property(retain, nonatomic) WBPageCard *copyfollowCards; // @synthesize copyfollowCards=_copyfollowCards;
@property(retain, nonatomic) WBPageCard *followCards; // @synthesize followCards=_followCards;
@property(nonatomic) _Bool hideFromPrefix; // @synthesize hideFromPrefix=_hideFromPrefix;
@property(retain, nonatomic) NSString *objExt; // @synthesize objExt=_objExt;
@property(retain, nonatomic) WBStatusEditConfig *editConfig; // @synthesize editConfig=_editConfig;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSNumber *mblogVipType; // @synthesize mblogVipType=_mblogVipType;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(retain, nonatomic) NSString *attitudeDynamicAdid; // @synthesize attitudeDynamicAdid=_attitudeDynamicAdid;
@property(nonatomic) long long contentAuth; // @synthesize contentAuth=_contentAuth;
@property(retain, nonatomic) NSDictionary *commentManageInfo; // @synthesize commentManageInfo=_commentManageInfo;
@property(retain, nonatomic) NSString *likeDisablePrompt; // @synthesize likeDisablePrompt=_likeDisablePrompt;
@property(retain, nonatomic) NSString *commentDisablePrompt; // @synthesize commentDisablePrompt=_commentDisablePrompt;
@property(retain, nonatomic) NSString *retweetDisablePrompt; // @synthesize retweetDisablePrompt=_retweetDisablePrompt;
@property(retain, nonatomic) NSArray *screenNameNewSuffix; // @synthesize screenNameNewSuffix=_screenNameNewSuffix;
@property(retain, nonatomic) NSArray *screenNameSurfix; // @synthesize screenNameSurfix=_screenNameSurfix;
@property(copy, nonatomic) NSString *extraAnalysisParameter4Server; // @synthesize extraAnalysisParameter4Server=_extraAnalysisParameter4Server;
@property(retain, nonatomic) NSString *hotExt; // @synthesize hotExt=_hotExt;
@property(nonatomic) int commentReviewType; // @synthesize commentReviewType=_commentReviewType;
@property(retain, nonatomic) NSString *readTimeType; // @synthesize readTimeType=_readTimeType;
@property(nonatomic) long long visible; // @synthesize visible=_visible;
@property(nonatomic) int isShowBulletin; // @synthesize isShowBulletin=_isShowBulletin;
@property(retain, nonatomic) WBStatusExtraButtonInfo *extraButtonInfo; // @synthesize extraButtonInfo=_extraButtonInfo;
@property(nonatomic) long long weiboVersion; // @synthesize weiboVersion=_weiboVersion;
@property(retain, nonatomic) WBUniversalLongStatus *longStatus; // @synthesize longStatus=_longStatus;
@property(retain, nonatomic) NSDictionary *preloadData; // @synthesize preloadData=_preloadData;
@property(retain, nonatomic) NSArray *preloadArticleIDs; // @synthesize preloadArticleIDs=_preloadArticleIDs;
@property(retain, nonatomic) NSString *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) NSDictionary *continueTag; // @synthesize continueTag=_continueTag;
@property(nonatomic) long long preloadType; // @synthesize preloadType=_preloadType;
@property(retain, nonatomic) NSString *deleteWeiboText; // @synthesize deleteWeiboText=_deleteWeiboText;
@property(nonatomic) _Bool isDisableHeightlightTime; // @synthesize isDisableHeightlightTime=_isDisableHeightlightTime;
@property(retain, nonatomic) NSDictionary *promotionDic; // @synthesize promotionDic=_promotionDic;
@property(retain, nonatomic) NSArray *detail_products; // @synthesize detail_products=_detail_products;
@property(retain, nonatomic) NSArray *feed_products; // @synthesize feed_products=_feed_products;
@property(retain, nonatomic) NSString *full_text; // @synthesize full_text=_full_text;
@property(retain, nonatomic) NSString *bgText; // @synthesize bgText=_bgText;
@property(retain, nonatomic) NSDictionary *bgStyleDic; // @synthesize bgStyleDic=_bgStyleDic;
@property(retain, nonatomic) NSString *bgCardId; // @synthesize bgCardId=_bgCardId;
@property(retain, nonatomic) NSString *bgScheme; // @synthesize bgScheme=_bgScheme;
@property(retain, nonatomic) NSString *bgType; // @synthesize bgType=_bgType;
@property(retain, nonatomic) NSString *bgPic; // @synthesize bgPic=_bgPic;
@property(nonatomic) long long mlevel; // @synthesize mlevel=_mlevel;
@property(nonatomic) long long blockType; // @synthesize blockType=_blockType;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) _Bool mblogMenuNewStyle; // @synthesize mblogMenuNewStyle=_mblogMenuNewStyle;
@property(retain, nonatomic) NSArray *dynamicMenusNew; // @synthesize dynamicMenusNew=_dynamicMenusNew;
@property(nonatomic) long long picNum; // @synthesize picNum=_picNum;
@property(nonatomic) long long weiboSafeValue; // @synthesize weiboSafeValue=_weiboSafeValue;
@property(nonatomic) unsigned long long mblogLines; // @synthesize mblogLines=_mblogLines;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) long long mostAttitudeType; // @synthesize mostAttitudeType=_mostAttitudeType;
@property(nonatomic) int componentHideFlag; // @synthesize componentHideFlag=_componentHideFlag;
@property(retain, nonatomic) NSDictionary *adObject; // @synthesize adObject=_adObject;
@property(retain, nonatomic) NSString *rewardScheme; // @synthesize rewardScheme=_rewardScheme;
@property(retain, nonatomic) NSMutableArray *customAttitudes; // @synthesize customAttitudes=_customAttitudes;
@property(nonatomic) long long likeAttitudeType; // @synthesize likeAttitudeType=_likeAttitudeType;
@property(retain, nonatomic) NSArray *recentComments; // @synthesize recentComments=_recentComments;
@property(retain, nonatomic) NSDictionary *placeDic; // @synthesize placeDic=_placeDic;
@property(nonatomic) _Bool sourceUrlEnable; // @synthesize sourceUrlEnable=_sourceUrlEnable;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSDictionary *textSourceSchemeDict; // @synthesize textSourceSchemeDict=_textSourceSchemeDict;
@property(copy, nonatomic) NSString *textSource; // @synthesize textSource=_textSource;
@property(retain, nonatomic) NSDictionary *sourceSchemeDict; // @synthesize sourceSchemeDict=_sourceSchemeDict;
@property(readonly, nonatomic) NSDictionary *geoDetailInfo; // @synthesize geoDetailInfo;
@property(nonatomic) long long sharedCount; // @synthesize sharedCount;
@property(retain, nonatomic) NSArray *products; // @synthesize products;
- (void)setTimestampInfo:(id)arg1;
- (id)timestampInfo;
- (void)setSaveTime:(double)arg1;
- (double)saveTime;
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl;
@property(nonatomic) long long readCount; // @synthesize readCount;
@property(nonatomic) long long weiboIndex; // @synthesize weiboIndex;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(nonatomic) long long recom_state; // @synthesize recom_state;
@property(nonatomic) __weak WBUniversalStatus *retweetByStatus; // @synthesize retweetByStatus;
@property(retain, nonatomic) NSArray *dynamicMenus; // @synthesize dynamicMenus;
@property(retain, nonatomic) NSArray *dynamicButtons; // @synthesize dynamicButtons;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures;
@property(retain, nonatomic) NSDate *originalDate; // @synthesize originalDate;
@property(nonatomic) unsigned long long statusLikeState; // @synthesize statusLikeState;
@property(retain, nonatomic) NSString *directionGroupID; // @synthesize directionGroupID;
@property(retain, nonatomic) NSString *feedGroupID; // @synthesize feedGroupID;
@property(retain, nonatomic) NSString *smartFeedID; // @synthesize smartFeedID;
@property(retain, nonatomic) NSString *adMark; // @synthesize adMark;
@property(retain, nonatomic) NSString *statusTypeName; // @synthesize statusTypeName;
@property(nonatomic) long long statusType; // @synthesize statusType;
@property(nonatomic) _Bool isKeepTop; // @synthesize isKeepTop;
@property(readonly, nonatomic) double distance; // @synthesize distance;
@property(readonly, nonatomic) struct CLLocationCoordinate2D location; // @synthesize location;
@property(nonatomic) long long likeCount; // @synthesize likeCount;
@property(nonatomic) unsigned long long pendingCommentCount; // @synthesize pendingCommentCount;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount;
@property(nonatomic) unsigned long long retweetCount; // @synthesize retweetCount;
@property(nonatomic) _Bool favorited; // @synthesize favorited;
@property(retain, nonatomic) WBStatusComplaintInfo *complaintInfo; // @synthesize complaintInfo;
@property(retain, nonatomic) WBStatusWPInfo *wpInfo; // @synthesize wpInfo;
@property(retain, nonatomic) NSString *originalImageURL; // @synthesize originalImageURL;
@property(retain, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL;
@property(retain, nonatomic) NSString *rid; // @synthesize rid;
@property(retain, nonatomic) NSString *favorID; // @synthesize favorID;
@property(retain, nonatomic) NSString *sourceScheme; // @synthesize sourceScheme;
@property(copy, nonatomic) NSString *source; // @synthesize source;
- (void).cxx_destruct;
- (_Bool)itemIDIsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithCards:(id)arg1;
- (id)copyWithCardPageInfo;
- (id)extraMenuModelWithType:(unsigned long long)arg1;
- (id)analysisDynamicMenusNewFromServer:(id)arg1;
- (id)analysisDynamicMenusFromServer:(id)arg1;
- (id)analysisDynamicButtonsFromServer:(id)arg1;
- (id)searchItem;
- (void)updateStatusExtraProperties:(id)arg1;
- (void)updatePageInfoToDB;
- (id)valueForDatabaseKey:(id)arg1;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2 mergeTaskIfNeeded:(_Bool)arg3;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (id)getPreloadDataWithType:(long long)arg1 asyncHandle:(_Bool *)arg2;
- (void)dealloc;
- (_Bool)isShowShareContentViewTips;
- (_Bool)isNeedShowBulletinComments;
- (_Bool)containsOneOfTheMlevelAttributes:(long long)arg1;
- (_Bool)containsAllTheMlevelAttributes:(long long)arg1;
- (id)bgPicUrl;
@property(readonly, nonatomic) __weak NSArray *statusPictures;
- (_Bool)setLikeStateAndUpdateLikeCount:(unsigned long long)arg1;
- (_Bool)setLikeStateAndUpdateLikeCount:(unsigned long long)arg1 attitudeType:(long long)arg2;
- (id)fixedAdMark;
- (id)typeName;
- (id)availableAvatarImageURLs;
- (id)firstPictureImageURLs;
- (id)availableImageForShare;
- (id)availableOriginalImageURL;
- (id)availableMiddleImageURL;
- (id)availableThumbnailImageURL;
@property(retain, nonatomic) NSString *middleImageURL; // @synthesize middleImageURL;
@property(readonly, nonatomic) _Bool hasProduct;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasPhoto;
@property(readonly, nonatomic) _Bool hasRetweet;
- (void)setRetweetedStatus:(id)arg1;
- (id)retweetedStatus;
- (id)displaySource;
- (_Bool)promotable;
- (_Bool)retweetable;
- (void)setPageInfo:(id)arg1;
- (id)sourceUrlDictFromSource:(id)arg1;
- (id)getPreloadDataArray;
- (_Bool)_parserStatusSource:(id)arg1 isTextSource:(_Bool)arg2;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)commonButtonDidChangeNotification:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
@property(readonly, nonatomic) WBPromotion *promotion;
- (id)analysisParameters;
- (id)ownAnalysisParameters;
- (void)updateWithDictionaryAndKeepAnalysisInfo:(id)arg1;
- (id)featureCode;
- (id)ananyticsFeedGroupID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

