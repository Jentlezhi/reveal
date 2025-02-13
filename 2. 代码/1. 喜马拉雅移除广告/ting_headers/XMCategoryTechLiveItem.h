//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMCategoryTechLiveItem : XMModel
{
    long long _anchorId;
    long long _liveId;
    long long _liveStatus;
    double _startTime;
    NSString *_title;
    NSString *_anchorName;
    NSString *_anchorPictureUrl;
    NSString *_coverPictureUrl;
    NSString *_recData;
    NSString *_liveH5Url;
}

@property(copy, nonatomic) NSString *liveH5Url; // @synthesize liveH5Url=_liveH5Url;
@property(copy, nonatomic) NSString *recData; // @synthesize recData=_recData;
@property(copy, nonatomic) NSString *coverPictureUrl; // @synthesize coverPictureUrl=_coverPictureUrl;
@property(copy, nonatomic) NSString *anchorPictureUrl; // @synthesize anchorPictureUrl=_anchorPictureUrl;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;

@end

