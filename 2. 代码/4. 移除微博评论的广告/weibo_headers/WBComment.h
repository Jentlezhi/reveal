//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUniversalComment.h"

#import "WBCommentListItemInterface-Protocol.h"

@class NSArray, NSMutableArray, NSString, WBCommentCardStruct, WBCommentMoreItem, WBCommentTrendItem, WBStatus, WBTimelineAttributedText;

@interface WBComment : WBUniversalComment <WBCommentListItemInterface>
{
    WBStatus *status;
    NSString *_dataString;
    _Bool _isCommonComment;
    _Bool _isAnchor;
    _Bool _isLikedByMblogAuthor;
    _Bool _disable_reply;
    _Bool _isFirst;
    _Bool _isLast;
    _Bool _hiddenTime;
    _Bool _shouldShowColon;
    WBCommentTrendItem *parentItem;
    long long _pendingState;
    NSMutableArray *_subComments;
    NSString *_maxID;
    NSString *_sinceID;
    unsigned long long _totalSubCommentsCount;
    unsigned long long _commentLevel;
    WBCommentMoreItem *_moreItem;
    NSString *_floorNum;
    WBTimelineAttributedText *_cachedAttributedText;
    double _height;
    double _viewWidth;
    double _tag;
    WBCommentCardStruct *_commentCardStruct;
    NSArray *_commentInfos;
    NSString *_readTimeType;
    NSArray *_headerBadges;
    struct CGSize _textSize;
    struct CGSize _imageSize;
    struct CGRect _imageFrame;
}

+ (id)commentListItemWithDictionary:(id)arg1 parentItem:(id)arg2;
+ (Class)quotedItemClass;
+ (id)commentWithTask:(id)arg1 quotedItem:(id)arg2;
+ (Class)tableViewCellClass;
+ (Class)drawingContextClass;
+ (Class)textContentViewClass;
+ (Class)contentViewClass;
@property(retain, nonatomic) NSArray *headerBadges; // @synthesize headerBadges=_headerBadges;
@property(copy, nonatomic) NSString *readTimeType; // @synthesize readTimeType=_readTimeType;
@property(retain, nonatomic) NSArray *commentInfos; // @synthesize commentInfos=_commentInfos;
@property(retain, nonatomic) WBCommentCardStruct *commentCardStruct; // @synthesize commentCardStruct=_commentCardStruct;
@property struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property double tag; // @synthesize tag=_tag;
@property double viewWidth; // @synthesize viewWidth=_viewWidth;
@property double height; // @synthesize height=_height;
@property(retain, nonatomic) WBTimelineAttributedText *cachedAttributedText; // @synthesize cachedAttributedText=_cachedAttributedText;
@property(nonatomic) _Bool shouldShowColon; // @synthesize shouldShowColon=_shouldShowColon;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(nonatomic) _Bool hiddenTime; // @synthesize hiddenTime=_hiddenTime;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) NSString *floorNum; // @synthesize floorNum=_floorNum;
@property(retain, nonatomic) WBCommentMoreItem *moreItem; // @synthesize moreItem=_moreItem;
@property(nonatomic) unsigned long long commentLevel; // @synthesize commentLevel=_commentLevel;
@property(nonatomic) unsigned long long totalSubCommentsCount; // @synthesize totalSubCommentsCount=_totalSubCommentsCount;
@property(retain, nonatomic) NSString *sinceID; // @synthesize sinceID=_sinceID;
@property(retain, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(retain, nonatomic) NSMutableArray *subComments; // @synthesize subComments=_subComments;
@property(nonatomic) _Bool disable_reply; // @synthesize disable_reply=_disable_reply;
@property(nonatomic) long long pendingState; // @synthesize pendingState=_pendingState;
@property(nonatomic) _Bool isLikedByMblogAuthor; // @synthesize isLikedByMblogAuthor=_isLikedByMblogAuthor;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool isCommonComment; // @synthesize isCommonComment=_isCommonComment;
@property(nonatomic) __weak WBCommentTrendItem *parentItem; // @synthesize parentItem;
@property(retain, nonatomic) WBStatus *status; // @synthesize status;
- (void).cxx_destruct;
- (double)prepareItemWithConstraintWidth:(double)arg1;
- (void)setDateString:(id)arg1;
- (id)dateString;
- (id)lastSubCommentID;
- (_Bool)isSendByMe;
- (_Bool)shouldShowImageIndicator;
- (_Bool)isRepliedToStatus;
- (_Bool)deletable;
- (id)briefQuotedItemText;
- (id)briefItemText;
- (id)statusWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)shieldHiddenLink:(id)arg1 urls:(id)arg2;
- (id)actionSheetElements;
- (id)accessibilityQuotedItemValue;
- (id)displaySourceScheme;
- (id)displaySourceWithFrom;
- (id)displaySource;
- (_Bool)shouldShowItemTypes;
- (_Bool)shouldShowSourceText;
- (void)didSelectRowOfTableView:(id)arg1 inViewController:(id)arg2;
- (id)uniqueDrawingContextIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *scheme;
@property(readonly) Class superclass;

@end

