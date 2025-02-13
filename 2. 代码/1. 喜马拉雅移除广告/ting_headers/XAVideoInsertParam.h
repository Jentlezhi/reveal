//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSArray, NSString, XMMAUIComponentPosition;

@interface XAVideoInsertParam : NSObject <XMMANativeMethodParamProtocol>
{
    _Bool _controls;
    _Bool _autoplay;
    _Bool _loop;
    _Bool _muted;
    _Bool _showPlayBtn;
    _Bool _showCenterPlayBtn;
    _Bool _showMuteBtn;
    _Bool _enableDanmu;
    _Bool _danmuBtn;
    _Bool _hide;
    _Bool _pageGesture;
    _Bool _showProgress;
    _Bool _showFullscreenBtn;
    _Bool _enableProgressGesture;
    NSString *_gesture;
    NSString *_videoId;
    NSString *_viewId;
    NSString *_sanId;
    NSString *_parentId;
    NSString *_src;
    NSString *_initialTime;
    NSString *_duration;
    NSString *_objectFit;
    NSString *_poster;
    NSString *_slaveId;
    XMMAUIComponentPosition *_position;
    NSArray *_danmuList;
    NSString *_direction;
}

@property(nonatomic) _Bool enableProgressGesture; // @synthesize enableProgressGesture=_enableProgressGesture;
@property(nonatomic) _Bool showFullscreenBtn; // @synthesize showFullscreenBtn=_showFullscreenBtn;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress=_showProgress;
@property(nonatomic) _Bool pageGesture; // @synthesize pageGesture=_pageGesture;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(nonatomic) _Bool danmuBtn; // @synthesize danmuBtn=_danmuBtn;
@property(nonatomic) _Bool enableDanmu; // @synthesize enableDanmu=_enableDanmu;
@property(retain, nonatomic) NSArray *danmuList; // @synthesize danmuList=_danmuList;
@property(nonatomic) _Bool showMuteBtn; // @synthesize showMuteBtn=_showMuteBtn;
@property(nonatomic) _Bool showCenterPlayBtn; // @synthesize showCenterPlayBtn=_showCenterPlayBtn;
@property(nonatomic) _Bool showPlayBtn; // @synthesize showPlayBtn=_showPlayBtn;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool controls; // @synthesize controls=_controls;
@property(retain, nonatomic) XMMAUIComponentPosition *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *poster; // @synthesize poster=_poster;
@property(copy, nonatomic) NSString *objectFit; // @synthesize objectFit=_objectFit;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *initialTime; // @synthesize initialTime=_initialTime;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *sanId; // @synthesize sanId=_sanId;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *gesture; // @synthesize gesture=_gesture;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

