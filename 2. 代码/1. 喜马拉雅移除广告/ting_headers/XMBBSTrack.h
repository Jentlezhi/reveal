//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface XMBBSTrack : NSObject
{
    _Bool _isDeleted;
    _Bool _isDraft;
    _Bool _isFree;
    _Bool _isPaid;
    _Bool _isPublic;
    _Bool _isRichAudio;
    _Bool _isVideo;
    unsigned long long _trackId;
    unsigned long long _albumId;
    NSString *_title;
    NSURL *_coverLarge;
    NSURL *_coverMiddle;
    NSURL *_coverSmall;
    unsigned long long _uid;
    unsigned long long _categoryId;
    unsigned long long _playCount;
    long long _comments;
    double _duration;
    double _sampleDuration;
    double _createdAt;
    long long _audioQualityLevel;
}

@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool isRichAudio; // @synthesize isRichAudio=_isRichAudio;
@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) long long audioQualityLevel; // @synthesize audioQualityLevel=_audioQualityLevel;
@property(nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) double sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long comments; // @synthesize comments=_comments;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSURL *coverSmall; // @synthesize coverSmall=_coverSmall;
@property(retain, nonatomic) NSURL *coverMiddle; // @synthesize coverMiddle=_coverMiddle;
@property(retain, nonatomic) NSURL *coverLarge; // @synthesize coverLarge=_coverLarge;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

