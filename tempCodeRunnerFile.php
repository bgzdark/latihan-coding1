<?php
File koneksi.php
<?php
mysql_pconnect("localhost","root","");
mysql_select_db("multikey");
?>
File index.php
<?php
require_once("koneksi.php");
extract($_GET);
if(empty($_GET['cari'])){
$query=mysql_query("select * from barang");
}
else{
$query=mysql_query("select * from barang where $kat_cari like
'%".$cari."%'");
}
$jumlahdata=mysql_num_rows($query);
$row=mysql_fetch_assoc($query);
?>
<!DOCTYPE html>
<html>
<head>
<title></title>
</head>
<body>
<div>
<div>
<div><h2>Data Barang</h2></div>
<div>
<form action="index.php" method="get">
<input type="search" name="cari">
<select name="kat_cari">
<optionvalue="kd_kategori">Kode
Kategori</option>
<optionvalue="kd_suplier">Kode Suplier</option>
</select>
<input type="submit" value="Cari">
</form>
</div><br>
<div>
</div>
</div>
<div>
<?php
?>
if(isset($_GET['cari'])){
echo "Pencarian berdasarkan ".$kat_cari." = ".$cari;
}
<table border="1" cellspacing="0" cellpadding="2">
<tr>
</tr>
<?php
<th>No</th>
<th>Kode Barang</th>
<th>Nama Barang</th>
<th>Stok</th>
<th>Harga</th>
<th>Kode Kategori</th>
<th>Kode Suplier</th>
$x=1;
if($jumlahdata>0){
do{
    ?>
<tr>
</tr>
<?php
<td><?php echo $x ?></td>
<td><?php echo $row['kd_barang']; ?></td>
<td><?php echo $row['nama_barang']; ?></td>
<td><?php echo $row['stok']; ?></td>
<td><?php echo $row['harga']; ?></td>
<td><?php echo $row['kd_kategori']; ?></td>
<td><?php echo $row['kd_suplier']; ?></td>
$x++;
}while($row=mysql_fetch_assoc($query));
}
?>
</table>
</div>
<br>
<div>
<a href="index.php">
<input type="Button" value="Kembali">
</a>
</div>
</div>
</body>
</html>