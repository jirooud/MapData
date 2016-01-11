//
//  MapViewController.h
//  MapData
//
//  Created by bpqd on 2016/01/11.
//  Copyright © 2016年 nakayama. All rights reserved.
//

//#import <UIKit/UIKit.h>

#import "ViewController.h"

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapViewController : UIViewController

@property (assign, nonatomic) BOOL isLocation;

// 現在位置記録用
@property (assign, nonatomic) CLLocationDegrees longitude;
@property (assign, nonatomic) CLLocationDegrees latitude;

@end
