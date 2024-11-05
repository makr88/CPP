// Fill out your copyright notice in the Description page of Project Settings.


#include "LBP_Reload.h"


int32 ULBP_Reload::F_Reload(int32 Bullet, bool& can_shot, bool& can_reload)
{
	FTimerHandle DelayReload;
	int32 max_bullet = 30;
	can_reload = false;
	can_shot = true;
	--Bullet;

	if (Bullet < 0)
		can_shot = false;
	if (Bullet < max_bullet)
		can_reload = true;
	return Bullet;
}

int32 ULBP_Reload::F_GunReload(int32 Bullet)
{
	Bullet = 30;
	return Bullet;
}
