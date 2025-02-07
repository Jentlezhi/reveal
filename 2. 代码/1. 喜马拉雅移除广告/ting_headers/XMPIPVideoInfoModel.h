//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface XMPIPVideoInfoModel : NSObject
{
    _Bool _isMute;
    float _volume;
    float _speed;
    float _scale;
    int _maskTop;
    int _maskLeft;
    int _maskBottom;
    int _maskRight;
    NSString *_path;
    long long _trimIn;
    long long _trimOut;
    long long _duration;
    NSString *_name;
    NSString *_authorName;
    UIImage *_coverImage;
    long long _inPoint;
    long long _outPoint;
    NSString *_pipPackageId;
    double _transx;
    double _transy;
    double _pan;
    double _scan;
}

@property(nonatomic) int maskRight; // @synthesize maskRight=_maskRight;
@property(nonatomic) int maskBottom; // @synthesize maskBottom=_maskBottom;
@property(nonatomic) int maskLeft; // @synthesize maskLeft=_maskLeft;
@property(nonatomic) int maskTop; // @synthesize maskTop=_maskTop;
@property(nonatomic) double scan; // @synthesize scan=_scan;
@property(nonatomic) double pan; // @synthesize pan=_pan;
@property(nonatomic) double transy; // @synthesize transy=_transy;
@property(nonatomic) double transx; // @synthesize transx=_transx;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *pipPackageId; // @synthesize pipPackageId=_pipPackageId;
@property(nonatomic) long long outPoint; // @synthesize outPoint=_outPoint;
@property(nonatomic) long long inPoint; // @synthesize inPoint=_inPoint;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long trimOut; // @synthesize trimOut=_trimOut;
@property(nonatomic) long long trimIn; // @synthesize trimIn=_trimIn;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasMask;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

