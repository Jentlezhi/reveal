//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableAttributedString, NSString, XMMUserInfo;

@interface XMMComment : NSObject
{
    NSArray *_nodeArray;
    NSMutableAttributedString *_contentAttributedString;
    _Bool _isPraised;
    _Bool _isGod;
    unsigned long long _commentId;
    XMMUserInfo *_authorInfo;
    NSString *_content;
    NSString *_location;
    double _createdTs;
    NSString *_media;
    long long _praiseCount;
    long long _replyCount;
    unsigned long long _rootCommentId;
    unsigned long long _parentCommentId;
    unsigned long long _toUid;
    NSString *_toNickName;
}

+ (id)fromReply:(id)arg1;
+ (id)fromComment:(id)arg1;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *toNickName; // @synthesize toNickName=_toNickName;
@property(nonatomic) unsigned long long toUid; // @synthesize toUid=_toUid;
@property(nonatomic) unsigned long long parentCommentId; // @synthesize parentCommentId=_parentCommentId;
@property(nonatomic) unsigned long long rootCommentId; // @synthesize rootCommentId=_rootCommentId;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSString *media; // @synthesize media=_media;
@property(nonatomic) double createdTs; // @synthesize createdTs=_createdTs;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) _Bool isGod; // @synthesize isGod=_isGod;
@property(nonatomic) _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) XMMUserInfo *authorInfo; // @synthesize authorInfo=_authorInfo;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)toReply;
- (id)toComment;
- (_Bool)isAtSomeone;
- (id)nodeArray;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

